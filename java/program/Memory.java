class Memory extends Hardware {
    private int size, speed;
    public Memory(String name, double price, int warrantyPeriod, String brand, int size, int speed) {
        super(name, price, warrantyPeriod, brand);
        this.size = size;
        this.speed = speed;
    }
    public int getSize() { return size; }
    public int getSpeed() { return speed; }

    // setter
    public void setSize(int size) { this.size = size; }
    public void setSpeed(int speed) { this.speed = speed; }
    
}
