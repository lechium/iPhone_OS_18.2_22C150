//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKTextBadgeAttachment.h>

@class IKColor;

@interface IKTextBadgeAttachment (TVMLKitAdditions)
- (void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(CDUnknownBlockType)arg2;	// IMP=0x0030000000010b36
- (void)tv_setImage:(id)arg1;	// IMP=0x003000000001088a
@property(retain, nonatomic, setter=tv_setCurrentTintColor:) IKColor *tv_currentTintColor;
@property(retain, nonatomic, setter=tv_setHighlightColor:) IKColor *tv_highlightColor;
- (void)tv_setResolving:(_Bool)arg1;	// IMP=0x003000000001071b
@property(readonly, nonatomic, getter=tv_isResolving) _Bool tv_resolving;
- (void)tv_setImageProxy:(id)arg1;	// IMP=0x003000000001066f
- (id)tv_imageProxy;	// IMP=0x003000000001065e
@end

