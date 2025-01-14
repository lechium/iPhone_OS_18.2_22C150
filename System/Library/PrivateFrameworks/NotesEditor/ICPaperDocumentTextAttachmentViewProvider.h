//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextAttachmentViewProvider.h>

@class MISSING_TYPE;
@protocol NSTextLocation;

@interface ICPaperDocumentTextAttachmentViewProvider : NSTextAttachmentViewProvider
{
    MISSING_TYPE *updatedLocationForRecycledViewProvider;	// 8 = 0x8
}

+ (void)registerIfNecessary;	// IMP=0x0060000000210f20
- (void).cxx_destruct;	// IMP=0x0000000000211b50
- (struct CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 position:(struct CGPoint)arg5;	// IMP=0x0000000000211a30
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(long long)arg4;	// IMP=0x0000000000211950
- (void)loadView;	// IMP=0x0000000000211920
@property(nonatomic, retain) id <NSTextLocation> updatedLocationForRecycledViewProvider; // @synthesize updatedLocationForRecycledViewProvider;
@property(nonatomic, retain) id <NSTextLocation> location;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;	// IMP=0x0000000000211090

@end

