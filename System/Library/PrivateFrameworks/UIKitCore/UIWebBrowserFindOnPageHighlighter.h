//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIView, UIWebBrowserView, UIWebPDFViewHandler;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject
{
    NSMutableArray *_highlightBubbleViews;	// 8 = 0x8
    NSArray *_pdfHighlightViews;	// 16 = 0x10
    UIView *_highlightHostView;	// 24 = 0x18
    UIWebBrowserView *_browserView;	// 32 = 0x20
    UIWebPDFViewHandler *_pdfHandler;	// 40 = 0x28
    _Bool _zoomToHighlightSelection;	// 48 = 0x30
    id <UIWebFindOnPageHighlighterDelegate> _delegate;	// 56 = 0x38
    NSString *_searchText;	// 64 = 0x40
    unsigned long long _numberOfMatches;	// 72 = 0x48
    unsigned long long _highlightedMatchIndex;	// 80 = 0x50
}

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;	// IMP=0x0010000001aa84ac
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;	// IMP=0x0000000001aaa3fd
- (void)searchDidFinish:(id)arg1;	// IMP=0x0000000001aaa3ab
- (void)searchLimitHit:(id)arg1;	// IMP=0x0000000001aaa361
- (void)searchWasCancelled:(id)arg1;	// IMP=0x0000000001aaa327
- (void)searchDidTimeOut:(id)arg1;	// IMP=0x0000000001aaa2ed
- (void)searchDidBegin:(id)arg1;	// IMP=0x0000000001aaa2b3
- (void)highlightPreviousMatch;	// IMP=0x0000000001aaa29f
- (void)highlightNextMatch;	// IMP=0x0000000001aaa288
- (void)_highlightFindOnPageMatch:(_Bool)arg1;	// IMP=0x0000000001aaa113
- (void)_highlightFindOnPageMatchForPDF:(_Bool)arg1 withPDFHandler:(id)arg2;	// IMP=0x0000000001aaa08a
- (id)_currentPDFSearchResult;	// IMP=0x0000000001aa9fc3
- (_Bool)_updateHighlightedMatchIndex:(_Bool)arg1;	// IMP=0x0000000001aa9f5d
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;	// IMP=0x0000000001aa9d63
- (unsigned long long)findOnPageOptions;	// IMP=0x0000000001aa9d58
- (_Bool)_highlightSelection;	// IMP=0x0000000001aa97df
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;	// IMP=0x0000000001aa922b
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;	// IMP=0x0000000001aa9211
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;	// IMP=0x0000000001aa91f9
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;	// IMP=0x0000000001aa88ed
- (void)_clearHighlightViews;	// IMP=0x0000000001aa8887
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;	// IMP=0x0000000001aa8824
- (void)clearBrowserView;	// IMP=0x0000000001aa8480
- (void)dealloc;	// IMP=0x0000000001aa83ed
- (void)_commonInitialize;	// IMP=0x0000000001aa8381
- (id)initWithPDFViewHandler:(id)arg1;	// IMP=0x0000000001aa8304
- (id)initWithBrowserView:(id)arg1;	// IMP=0x0000000001aa8294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

