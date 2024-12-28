//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSUUID;

@interface AMSDLeaveMultiUserHomeTask : AMSTask
{
    NSUUID *_homeIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002a7ae
@property(readonly, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (id)_generateAppProvidedData;	// IMP=0x001000000002a733
- (id)performTask;	// IMP=0x0010000000029f92
- (id)initWithHomeIdentifier:(id)arg1;	// IMP=0x0010000000029f24

@end
