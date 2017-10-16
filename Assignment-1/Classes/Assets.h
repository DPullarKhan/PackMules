class Assets()
{
	private:
		enum AssetType
		{
			texture, audio
		};
	public:
		void LoadAssetFrom();
		void SetAsset(Asset newAsset);

		Asset GetAsset();
}