//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSURL, PDFPage;
@protocol MarkupViewControllerPrivateProtocol;

@protocol MarkupViewControllerDelegate <NSObject>

@optional
- (_Bool)controllerCanShowWhileLocked:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (void)controllerDidChangeContent:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (_Bool)controllerCanBecomeFirstResponder:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (void)markupViewController:(id <MarkupViewControllerPrivateProtocol>)arg1 enablingFormFilling:(_Bool)arg2;
- (void)markupViewController:(id <MarkupViewControllerPrivateProtocol>)arg1 didChangeShowingSignaturesUI:(_Bool)arg2;
- (NSArray *)menuElementsForPage:(PDFPage *)arg1;
- (struct UIEdgeInsets)customSketchOverlayInsets;
- (struct UIEdgeInsets)customEdgeInsets;
- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 willWriteCGPDFDocument:(struct CGPDFDocument *)arg2 toContext:(struct CGContext *)arg3;
- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 didReadCGPDFDocument:(struct CGPDFDocument *)arg2;
- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
- (void)controllerWantsToShowShareSheet:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (_Bool)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 shouldOpenLinkAtURL:(NSURL *)arg2;
- (NSArray *)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 willSetToolbarItems:(NSArray *)arg2;
@end

