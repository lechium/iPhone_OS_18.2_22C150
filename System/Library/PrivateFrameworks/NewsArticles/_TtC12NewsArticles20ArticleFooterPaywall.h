//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol NAArticleFooterDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12NewsArticles20ArticleFooterPaywall : UIViewController
{
    MISSING_TYPE *footerDelegate;	// 8 = 0x8
    MISSING_TYPE *paywallViewController;	// 16 = 0x10
    MISSING_TYPE *paywallHeight;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b3b60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001b3b00
- (id)sectionItemViewController;	// IMP=0x00000000001b3ae0
- (double)sectionItemHeightForSize:(struct CGSize)arg1 traitCollection:(id)arg2;	// IMP=0x00000000001b3ac0
- (void)viewDidLoad;	// IMP=0x00000000001b3a90
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b3930
@property(nonatomic, retain) id <NAArticleFooterDelegate> footerDelegate; // @synthesize footerDelegate;

@end
