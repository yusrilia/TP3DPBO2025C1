class Hardware {
    protected String name, brand;
    protected double price;
    protected int warrantyPeriod;
    public Hardware(String name, double price, int warrantyPeriod, String brand) {
        this.name = name;
        this.price = price;
        this.warrantyPeriod = warrantyPeriod;
        this.brand = brand;
    }
    public String getName() { return name; }
    public String getBrand() { return brand; }
    public double getPrice() { return price; }
    public int getWarrantyPeriod() { return warrantyPeriod; }
    // setter
    public void setName(String name) { this.name = name; }
    public void setBrand(String brand) { this.brand = brand; }
    public void setPrice(double price) { this.price = price; }
    public void setWarrantyPeriod(int warrantyPeriod) { this.warrantyPeriod = warrantyPeriod; }

    
}