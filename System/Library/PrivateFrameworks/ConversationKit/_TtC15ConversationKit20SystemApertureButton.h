//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUISystemApertureButton.h>

@class MISSING_TYPE, NSString;

@interface _TtC15ConversationKit20SystemApertureButton : SBUISystemApertureButton
{
    MISSING_TYPE *provider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014810e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001480ce
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x0000000000147fbf
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000147e82
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000147d5a
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000147bff
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000147b69
- (void)didMoveToWindow;	// IMP=0x0000000000147abf
- (void)layoutSubviews;	// IMP=0x0000000000147a37
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001477ac

@end
