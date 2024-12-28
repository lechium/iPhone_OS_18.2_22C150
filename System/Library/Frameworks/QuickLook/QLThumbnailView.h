//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView
{
    _Bool _alwaysVisible;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    long long _pageNumber;	// 24 = 0x18
    struct CGRect _unselectedFrame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008ae0b
@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property _Bool alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000008accd
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000008aa3e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008a9ad

@end
