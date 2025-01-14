//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIMediaSocialAuthor.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICommenter : SKUIMediaSocialAuthor
{
    _Bool _isAttributed;	// 8 = 0x8
    _Bool _isMySelf;	// 9 = 0x9
    _Bool _useImageCopy;	// 10 = 0xa
    NSString *_attributedName;	// 16 = 0x10
    UIImage *_thumbnailImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ee86e
@property(copy, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool useImageCopy; // @synthesize useImageCopy=_useImageCopy;
@property(nonatomic) _Bool isMySelf; // @synthesize isMySelf=_isMySelf;
@property(nonatomic) _Bool isAttributed; // @synthesize isAttributed=_isAttributed;
@property(retain, nonatomic) NSString *attributedName; // @synthesize attributedName=_attributedName;
- (id)initWithAuthor:(id)arg1;	// IMP=0x00000000002ee652

@end

