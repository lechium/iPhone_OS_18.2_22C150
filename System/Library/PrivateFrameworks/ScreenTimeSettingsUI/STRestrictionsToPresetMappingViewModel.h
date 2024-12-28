//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STRestrictionsDataSourceProtocol;

__attribute__((visibility("hidden")))
@interface STRestrictionsToPresetMappingViewModel : NSObject
{
    id <STRestrictionsDataSourceProtocol> _restrictionsDataSource;	// 8 = 0x8
}

+ (id)boolPresetKeys;	// IMP=0x00100000000bd58b
+ (id)presetKeys;	// IMP=0x00100000000bd45b
- (void).cxx_destruct;	// IMP=0x00000000000bdba4
@property(retain) id <STRestrictionsDataSourceProtocol> restrictionsDataSource; // @synthesize restrictionsDataSource=_restrictionsDataSource;
- (id)_restrictionsWithValuesByRestriction:(id)arg1 presetKeys:(id)arg2;	// IMP=0x00000000000bd95f
- (id)_presetForValuesByRestriction:(id)arg1;	// IMP=0x00000000000bd7ce
- (void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd696
- (id)initWithRestrictionsDataSource:(id)arg1;	// IMP=0x00000000000bd641

@end
