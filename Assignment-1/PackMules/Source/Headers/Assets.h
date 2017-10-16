class Assets
{
	private:
		enum AssetType
		{
			texture, audio
		};
	public:
		void LoadAssetFrom();
		void SetAsset(Assets newAsset);

		Assets GetAsset();
};