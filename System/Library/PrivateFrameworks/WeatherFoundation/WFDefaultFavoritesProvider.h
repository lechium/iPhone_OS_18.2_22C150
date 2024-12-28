//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject
{
    id <WFFavoriteLocationProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000001a37
@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeLocation:(id)arg1;	// IMP=0x0000000000001a0a
- (void)addLocation:(id)arg1;	// IMP=0x0000000000001a04
- (void)setLocations:(id)arg1;	// IMP=0x00000000000019fe
- (id)locationFromCity:(id)arg1;	// IMP=0x0000000000001910
- (id)locations;	// IMP=0x0000000000001607
- (_Bool)canProvideDefaultFavorites;	// IMP=0x00000000000015ff
- (id)init;	// IMP=0x00000000000015e9
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;	// IMP=0x000000000000156e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
