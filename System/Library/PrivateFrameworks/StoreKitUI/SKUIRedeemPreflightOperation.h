//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemViewControllerLegacy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIRedeemPreflightOperation : NSOperation
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    _Bool _loadsRedeemCodeMetadata;	// 24 = 0x18
    CDUnknownBlockType _outputBlock;	// 32 = 0x20
    NSString *_redeemCode;	// 40 = 0x28
    SKUIRedeemConfiguration *_redeemConfiguration;	// 48 = 0x30
    _Bool _forcesAuthentication;	// 56 = 0x38
    SKUIRedeemViewControllerLegacy *_redeemViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000200b40
@property(nonatomic) _Bool forcesAuthentication; // @synthesize forcesAuthentication=_forcesAuthentication;
@property(nonatomic) __weak SKUIRedeemViewControllerLegacy *redeemViewController; // @synthesize redeemViewController=_redeemViewController;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;	// IMP=0x000000000020067e
- (id)_authenticationContext;	// IMP=0x00000000002005b3
- (void)main;	// IMP=0x00000000001ffef5
@property(retain) SKUIRedeemConfiguration *redeemConfiguration;
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool loadsRedeemCodeMetadata;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(_Bool)arg3;	// IMP=0x00000000001ff962
- (id)init;	// IMP=0x00000000001ff950
- (id)_initSKUIRedeemPreflightOperation;	// IMP=0x00000000001ff863

@end
