//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PUImportOneUpViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager
{
    unsigned long long _style;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)createSpec;	// IMP=0x000000000030a8d9
- (Class)specClass;	// IMP=0x000000000030a8c8
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;	// IMP=0x000000000030a884
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000030a86f

// Remaining properties
@property(readonly, nonatomic) PUImportOneUpViewControllerSpec *spec; // @dynamic spec;

@end

