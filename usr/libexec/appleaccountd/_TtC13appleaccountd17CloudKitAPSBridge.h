//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13appleaccountd17CloudKitAPSBridge : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017a9b0
- (id)init;	// IMP=0x001000000017a950
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000017a8e0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000017a790
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000017a6e0

@end
