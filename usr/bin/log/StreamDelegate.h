//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamDelegate : NSObject
{
    unsigned char _style;	// 8 = 0x8
    long long _timeout;	// 16 = 0x10
    struct _log_flags_s _flags;	// 24 = 0x18
    struct _log_totals_s _totals;	// 80 = 0x50
}

@property(nonatomic) struct _log_flags_s flags; // @synthesize flags=_flags;
@property(nonatomic) struct _log_totals_s totals; // @synthesize totals=_totals;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned char style; // @synthesize style=_style;
- (void)streamDidStop:(id)arg1;	// IMP=0x001000000001db8b
- (void)streamDidFail:(id)arg1 error:(id)arg2;	// IMP=0x001000000001db06
- (void)streamDidStart:(id)arg1;	// IMP=0x001000000001da0f
- (_Bool)activityStream:(id)arg1 results:(id)arg2;	// IMP=0x001000000001d872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
