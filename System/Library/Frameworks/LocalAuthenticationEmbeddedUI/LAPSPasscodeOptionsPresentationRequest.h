//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscodeOptionsViewControllerConfiguration, UIBarButtonItem, UIView, UIViewController;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeOptionsPresentationRequest : NSObject
{
    _Bool _animated;	// 8 = 0x8
    UIViewController *_sourceViewController;	// 16 = 0x10
    UIView *_sourceView;	// 24 = 0x18
    UIBarButtonItem *_sourceItem;	// 32 = 0x20
    LAPSPasscodeOptionsViewControllerConfiguration *_config;	// 40 = 0x28
    long long _presentationStyle;	// 48 = 0x30
    id <LAPSPasscodeOptionsViewControllerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000013106
@property(nonatomic) __weak id <LAPSPasscodeOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) LAPSPasscodeOptionsViewControllerConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) UIBarButtonItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (id)initWithSourceViewController:(id)arg1;	// IMP=0x0000000000012feb

@end
