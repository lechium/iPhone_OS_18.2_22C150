//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol AMSBagProtocol;

@interface AMSStorefrontHeaderValueCreation : NSObject
{
}

+ (id)combinedStorefrontFromStorefront:(id)arg1 suffix:(id)arg2 error:(id *)arg3;	// IMP=0x00800000000d6ac8
+ (void)storefrontHeaderValueForAccount:(ACAccount *)arg1 bag:(id <AMSBagProtocol>)arg2 mediaType:(NSString *)arg3 allowFailedSuffixFetch:(_Bool)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;	// IMP=0x00800000000d67de
- (id)init;	// IMP=0x00000000000d72f4

@end
