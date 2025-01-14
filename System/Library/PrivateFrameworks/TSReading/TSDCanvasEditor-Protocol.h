//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDEditor-Protocol.h>
#import <TSReading/TSDSubcommandProvider-Protocol.h>
#import <TSReading/TSDTextInput-Protocol.h>

@class NSArray, NSObject, NSSet, TSDCanvasEditorHelper, TSDDrawableInfo, TSDExteriorTextWrap, TSDInteractiveCanvasController, TSDRep, TSKSelection, TSPObject, TSPPasteboard;
@protocol TSDCanvasSelection, TSDContainerInfo, TSDEditor, TSDInfo;

@protocol TSDCanvasEditor <TSDEditor, TSDSubcommandProvider, TSDTextInput>
+ (id <TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
+ (id <TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1;
@property(readonly, nonatomic) TSPObject *modelForSelection;
@property(readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (_Bool)shouldPushNewEditorForNewSelection;
- (_Bool)isRepSelectable:(TSDRep *)arg1;
- (_Bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (_Bool)canvasEditorCanGroupWithSender:(id)arg1;
- (_Bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (_Bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyWithSender:(id)arg1;
- (_Bool)canvasEditorCanCutWithSender:(id)arg1;
- (_Bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (_Bool)shouldUseAlternateSelectionHighlight;
- (NSObject<TSDEditor> *)editorToPopToOnEndEditing;
- (unsigned long long)countOfDrawables;
- (NSArray *)drawables;
- (void)connectWithConnectionLine:(id)arg1;
- (_Bool)canGroupDrawable:(TSDDrawableInfo *)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)copyToPasteboard:(TSPPasteboard *)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)isSelectedInfo:(NSObject<TSDInfo> *)arg1;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
- (void)setSelectionToInfos:(NSSet *)arg1;
- (void)setSelectionToInfo:(TSDDrawableInfo *)arg1;
- (void)setSelectionToRep:(TSDRep *)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (id <TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
- (id <TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1;
- (void)teardown;
- (void)repWasCreated:(TSDRep *)arg1;
- (void)canvasInfosDidChange;
- (id)initWithInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;

@optional
- (void)setExteriorTextWrapMargin:(double)arg1 forInfos:(NSSet *)arg2;
- (void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 forInfos:(NSSet *)arg2;
- (TSDExteriorTextWrap *)exteriorTextWrapForInfos:(NSSet *)arg1;
@end

