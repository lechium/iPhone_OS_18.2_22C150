//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMFMessage, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaSessionRequestMessageInformation : HMFObject
{
    HMFMessage *_message;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000916755
- (void).cxx_destruct;	// IMP=0x0000000000916742
@property(readonly) HMFMessage *message; // @synthesize message=_message;
- (id)attributeDescriptions;	// IMP=0x000000000091660e
@property(readonly) HMDDevice *remoteSourceDevice;
@property(readonly, copy) NSUUID *messageIdentifier;
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000091644c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

