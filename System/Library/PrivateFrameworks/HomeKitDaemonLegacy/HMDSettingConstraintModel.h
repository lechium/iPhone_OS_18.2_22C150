//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingConstraintModel : HMBModel
{
}

+ (id)hmbProperties;	// IMP=0x0010000000493bb8
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x0000000000493a6d
@property(readonly, nonatomic) NSString *nameForKeyPath;

// Remaining properties
@property(copy, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end

