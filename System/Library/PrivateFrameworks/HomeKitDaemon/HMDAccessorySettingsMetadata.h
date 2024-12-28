//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingGroupMetadata, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsMetadata : HMFObject
{
    HMDAccessorySettingGroupMetadata *_rootGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000052aeca
@property(readonly) HMDAccessorySettingGroupMetadata *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)initWithURL:(id)arg1;	// IMP=0x000000000052ac9a
- (id)init;	// IMP=0x000000000052a9d5

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end
