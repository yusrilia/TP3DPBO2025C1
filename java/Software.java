class Software {
    protected String name, version;
    public Software(String name, String version) {
        this.name = name;
        this.version = version;
    }

    public String getName() { return name; }
    public String getVersion() { return version; }

    // setter
    public void setName(String name) { this.name = name; }
    public void setVersion(String version) { this.version = version; }
    
}