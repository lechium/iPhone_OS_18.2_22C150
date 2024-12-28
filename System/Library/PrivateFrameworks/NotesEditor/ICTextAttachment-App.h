//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICTextAttachment.h>

@interface ICTextAttachment (App)
- (double)attachmentThumbnailViewHeight;	// IMP=0x009000000012e834
- (struct CGSize)attachmentSizeForImageInTextContainer:(id)arg1 intrinsicImageSize:(struct CGSize)arg2;	// IMP=0x009000000012e6b4
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;	// IMP=0x009000000012e4ce
- (id)viewForLayoutManager:(id)arg1;	// IMP=0x009000000012e490
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;	// IMP=0x009000000012e3e3
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;	// IMP=0x009000000012e2fb
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x00900000001925c8
- (id)imageForBounds:(struct CGRect)arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;	// IMP=0x009000000019232e
@end
