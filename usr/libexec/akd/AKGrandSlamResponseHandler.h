//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AKAuthenticatedServerRequest;

@interface AKGrandSlamResponseHandler : NSObject
{
    id <AKAuthenticatedServerRequest> _context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000cd6a
@property(retain, nonatomic) id <AKAuthenticatedServerRequest> context; // @synthesize context=_context;
- (void)_revokeDeviceTrust;	// IMP=0x001000000000cc6c
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;	// IMP=0x001000000000cc46
- (void)handleResponseError:(id)arg1;	// IMP=0x001000000000caf0
- (id)initWithContext:(id)arg1;	// IMP=0x001000000000ca96

@end
