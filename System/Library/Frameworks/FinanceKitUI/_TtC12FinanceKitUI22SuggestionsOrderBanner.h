//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSAttributedString, NSString, NSURL, UIImage;

@interface _TtC12FinanceKitUI22SuggestionsOrderBanner : NSObject
{
    MISSING_TYPE *orderBundle;	// 8 = 0x8
    MISSING_TYPE *order;	// 0 = 0x0
    MISSING_TYPE *configuration;	// 0 = 0x0
}

+ (id)walletLogo;	// IMP=0x00600000000436b0
- (void).cxx_destruct;	// IMP=0x0000000000042790
- (id)init;	// IMP=0x0000000000043750
@property(nonatomic, readonly) NSAttributedString *bannerAttributedSubtitle;
@property(nonatomic, readonly) NSURL *orderDeepLink;
@property(nonatomic, readonly) UIImage *merchantLogo;
@property(nonatomic, readonly) NSString *merchantName;
- (void)dealloc;	// IMP=0x0000000000042710
- (id)init:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000042190

@end

