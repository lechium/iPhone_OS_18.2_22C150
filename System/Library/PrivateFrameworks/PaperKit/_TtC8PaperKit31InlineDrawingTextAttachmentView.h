//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKTextAttachmentDrawingView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit31InlineDrawingTextAttachmentView : PKTextAttachmentDrawingView
{
    MISSING_TYPE *dropInteraction;	// 8 = 0x8
    MISSING_TYPE *dropSessionType;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_acceptedDropLayouts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000210fd0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000210f30
- (id)initWithFrame:(struct CGRect)arg1 drawing:(id)arg2;	// IMP=0x0000000000210e40
- (id)initWithAttachment:(id)arg1 drawingClass:(Class)arg2 inserted:(_Bool)arg3;	// IMP=0x0000000000210c70
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x0000000000210c50
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000000210be0
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x0000000000210b60
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x0000000000210ae0
- (void)didMoveToWindow;	// IMP=0x00000000002109d0

@end

