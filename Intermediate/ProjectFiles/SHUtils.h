#pragma once


class SHUtils
{
public:
	template<typename T>
	static T* GetSHPlayerComponent(APawn* PlayerPawn)
	{
		if (!PlayerPawn) return nullptr;

		const auto Component = PlayerPawn->GetComponentByClass(T::StaticClass());
		return Cast<T>(Component);
	}
};