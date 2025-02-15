//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPLinkMetadata, NSArray, SWShareableContent, UIImage;

@interface AUISWShareableContent : NSObject
{
    SWShareableContent *_content;	// 8 = 0x8
    UIImage *_previewImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000390c
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) SWShareableContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) LPLinkMetadata *metadata;
@property(readonly, copy, nonatomic) NSArray *itemProviders;
- (id)initWithContent:(id)arg1;	// IMP=0x00100000000036c0

@end

