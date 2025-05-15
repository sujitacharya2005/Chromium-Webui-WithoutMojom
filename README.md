
# Chromium WebUI Without Mojom

This project demonstrates how to remove the Mojom (Modular JavaScript Object Model) IPC bindings from a WebUI component in Chromium and implement a custom alternative for browser-to-renderer communication.

> ⚙️ **Target Audience**: Chromium contributors, browser developers, researchers, and advanced C++ engineers working with Chromium-based codebases.

---

## 🚀 What This Project Does

Chromium’s WebUI modules typically use **Mojom** for inter-process communication between browser (C++) and renderer (JavaScript). This project shows how to:

- **Bypass Mojom bindings**
- Use direct communication methods
- Maintain a working WebUI page in Chromium
- Reduce the dependency chain in the GN build process

This helps developers:
- Understand the internals of Chromium WebUI
- Learn how to simplify Chromium modules when Mojom is overkill
- Build lighter and faster features where full IPC isn’t needed

---

## 📂 Project Structure

```
chromium/
└── src/
    └── my_webui_without_mojom/
        ├── my_webui_controller.cc
        ├── my_webui_controller.h
        ├── my_webui.ts
        ├── index.html
        ├── BUILD.gn
        └── ...
```

Key components:
- `my_webui_controller.cc/.h`: C++ controller for handling WebUI requests
- `my_webui.ts`: TypeScript/JS logic for the frontend
- `index.html`: Bound WebUI page
- `BUILD.gn`: Updated GN build file excluding Mojom generation

---

## 🧠 Why This Matters

Mojom is powerful, but it can be overkill for simple pages or tightly-coupled components. Removing it:
- Reduces build complexity
- Speeds up compilation
- Gives developers more control over the data flow
- Useful for experimenting with alternate data pipelines

This is especially relevant in:
- Performance-constrained environments (embedded/mobile)
- Custom browser forks (Brave, Vivaldi, in-app browsers)
- Fast prototyping use-cases

---

## 🛠️ Build Instructions

Make sure your Chromium source is already set up (`depot_tools`, sync, etc).

1. Clone this project inside `src/`:
   ```bash
   cd chromium/src
   git clone https://github.com/sujitacharya2005/Chromium-Webui-WithoutMojom.git
   ```

2. Modify the `BUILD.gn` and `BUILD.gn` dependencies to include your WebUI module.

3. Rebuild Chromium:
   ```bash
   autoninja -C out/Default chrome
   ```

4. Run Chromium with the WebUI URL:
   ```
   chrome://my-webui-without-mojom
   ```

---

## 📸 Screenshots

| WebUI Page | C++-JS Communication |
|------------|----------------------|
| ![screenshot](docs/webui.png) | *Replace with actual screenshot* |

---

## 🧩 Dependencies Removed

- Mojom file generation (`*.mojom`)
- `bindings=mojom_js` lines in `BUILD.gn`
- IPC handlers using `base::Value::Dict` instead of `mojom::StructPtr`

---

## 📢 Author

**Sujit Acharya**  
Senior Android & Chromium Developer  
[LinkedIn](https://linkedin.com/in/sujit-acharya) | [GitHub](https://github.com/sujitacharya2005) | sujitacharya2005@gmail.com

---

## 🌟 Contributions & Feedback

Feel free to open an issue or fork the project. Pull requests to demonstrate alternate IPC or further simplify Chromium WebUI pipelines are welcome.

---

## 📝 License

This project is for educational and demo purposes only. Follows Chromium’s licensing model where applicable.
