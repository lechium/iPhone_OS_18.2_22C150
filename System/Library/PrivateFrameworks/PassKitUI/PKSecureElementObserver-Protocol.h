//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKSecureElement;

@protocol PKSecureElementObserver <NSObject>

@optional
- (void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;
- (void)secureElementDidLeaveRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElementDidEnterRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidFinishWithSuccess:(_Bool)arg2;
- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
@end
