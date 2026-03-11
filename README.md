# M Converter v0.1

![M Converter Banner](path/to/your/image.png)  


A small C project for base conversions, created by [ml0w6c65766c](https://github.com/ml0w6c65766c).  
The converter supports conversions between **Binary, Decimal, and Hex**.

---

## Features

| Option | Conversion        
|--------|------------------|
| 1      | Binary → Hex      | 
| 2      | Binary → Decimal  | 
| 3      | Decimal → Binary  |
| 4      | Decimal → Hex     | 
| 5      | Hex → Binary      | 
| 6      | Hex → Decimal     | 

---

## Installation / Build

This project uses a **Makefile** for easy compiling and running.

### Prerequisites

- Linux / macOS terminal  
- `gcc` compiler  
- `make` utility  

Install `make` if you don’t have it:

```bash
sudo apt install make
```

---

## Compile and Run
To compile and run the converter:
```bash
make run
```
---

## Usage
1. Run the program with ```make run.```
2. Choose a conversion option from the menu (1–6).
3. Enter the number (Binary, Decimal, or Hex) when prompted.
4. The converted output will be displayed immediately.
