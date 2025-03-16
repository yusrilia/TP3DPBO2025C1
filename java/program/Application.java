class Application extends Software {
    private String category, license;
    public Application(String name, String version, String category, String license) {
        super(name, version);
        this.category = category;
        this.license = license;
    }
    public String getName() { return name; }
    public String getCategory() { return category; }

    // setter
    public void setCategory(String category) { this.category = category; }
    public void setLicense(String license) { this.license = license; }
    
}