class HardDrive extends Storage {
    private Hardware hardware;
    private int cache;
    public HardDrive(String name, double price, int warrantyPeriod, String brand, 
                     String capacity, String type, int cache) {
        super(capacity, type);
        this.hardware = new Hardware(name, price, warrantyPeriod, brand);
        this.cache = cache;
    }
    public String getName() { return hardware.getName(); }
    public int getCache() { return cache; }

    // setter
    public void setCache(int cache) { this.cache = cache; }




}