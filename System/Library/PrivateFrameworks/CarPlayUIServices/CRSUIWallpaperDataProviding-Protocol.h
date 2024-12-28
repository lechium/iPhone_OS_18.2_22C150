//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/BSInvalidatable-Protocol.h>
#import <CarPlayUIServices/NSObject-Protocol.h>

@class CRSUIResolvedWallpaper, CRVehicle, NSArray, NSString;
@protocol CRSUIWallpaper, CRSUIWallpaperDataProvidingDelegate, CRWallpaperData;

@protocol CRSUIWallpaperDataProviding <NSObject, BSInvalidatable>
@property(nonatomic) __weak id <CRSUIWallpaperDataProvidingDelegate> dataProviderDelegate;
- (CRSUIResolvedWallpaper *)resolveWallpaper:(id <CRSUIWallpaper>)arg1;
- (id <CRSUIWallpaper>)loadWallpaperFromData:(id <CRWallpaperData>)arg1;
- (NSArray *)dynamicAppearanceWallpapersForVehicle:(CRVehicle *)arg1;
- (NSArray *)defaultWallpapers;
- (NSArray *)wallpapers;
- (NSString *)displayID;
- (unsigned long long)version;
- (_Bool)isReady;
@end
