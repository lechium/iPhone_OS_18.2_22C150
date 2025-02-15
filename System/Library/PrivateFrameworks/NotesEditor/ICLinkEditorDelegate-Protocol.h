//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICTTMergeableStringSelection, NSString, NSURL;

@protocol ICLinkEditorDelegate <NSObject>
@property(readonly, nonatomic) _Bool languageHasSpaces;
@property(readonly, nonatomic) long long writingDirection;
@property(readonly) _Bool shouldShowFloatingSuggestions;
- (void)linkEditorWillDismiss;
- (void)openLinkEditor:(id)arg1;
- (void)removeLinksFromTextSelection:(ICTTMergeableStringSelection *)arg1 range:(struct _NSRange)arg2;
- (void)removeLinksFromCurrentSelection;
- (void)createLink:(NSURL *)arg1 title:(NSString *)arg2 textSelection:(ICTTMergeableStringSelection *)arg3 range:(struct _NSRange)arg4 addApproach:(long long)arg5;
- (void)createNoteLinkAttachment:(NSString *)arg1 textSelection:(ICTTMergeableStringSelection *)arg2 range:(struct _NSRange)arg3 addApproach:(long long)arg4;
@end

