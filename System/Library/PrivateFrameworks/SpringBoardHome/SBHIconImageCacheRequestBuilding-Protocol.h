//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, SBHIconImageAppearance, SBIcon;
@protocol SBHIconImageCacheRequestIdentifying;

@protocol SBHIconImageCacheRequestBuilding
- (id <SBHIconImageCacheRequestIdentifying>)finalizeRequestWithCompletionHandler:(void (^)(id <SBHIconImageCacheResultDescribing>))arg1;
- (void)addIcons:(NSArray *)arg1 prioritizedImageAppearances:(NSDictionary *)arg2 options:(unsigned long long)arg3;
- (void)addIcons:(NSArray *)arg1 imageAppearance:(SBHIconImageAppearance *)arg2 priority:(long long)arg3 options:(unsigned long long)arg4;
- (void)addIcon:(SBIcon *)arg1 prioritizedImageAppearances:(NSDictionary *)arg2 options:(unsigned long long)arg3;
- (void)addIcon:(SBIcon *)arg1 imageAppearance:(SBHIconImageAppearance *)arg2 priority:(long long)arg3 options:(unsigned long long)arg4;
@end

