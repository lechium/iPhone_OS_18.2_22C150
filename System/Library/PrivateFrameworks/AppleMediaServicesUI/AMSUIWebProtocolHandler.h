//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSUIWebProtocolDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler
{
    id <AMSUIWebProtocolDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d277e
@property(nonatomic) __weak id <AMSUIWebProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000d2670

@end
