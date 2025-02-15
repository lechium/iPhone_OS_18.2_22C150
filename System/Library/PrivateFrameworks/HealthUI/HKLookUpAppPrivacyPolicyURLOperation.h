//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AMSPromise, NSError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSURL *_privacyPolicyURL;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    AMSPromise *_outstandingPromise;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001795f3
@property(retain) AMSPromise *outstandingPromise; // @synthesize outstandingPromise=_outstandingPromise;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(getter=isFinished) _Bool finished;
@property(getter=isExecuting) _Bool executing;
- (_Bool)isAsynchronous;	// IMP=0x00000000001793f5
- (void)start;	// IMP=0x0000000000179327
- (void)_performLookup;	// IMP=0x0000000000178cea
- (void)cancel;	// IMP=0x0000000000178b83
- (id)debugDescription;	// IMP=0x0000000000178aa1
- (id)description;	// IMP=0x00000000001789f7
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000017897d
- (id)init;	// IMP=0x0000000000178903

@end

