//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSArray, SUUIModalDocumentController;

__attribute__((visibility("hidden")))
@interface SUUIJSModalDocumentController : IKJSObject
{
    SUUIModalDocumentController *_modalDocumentController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000344c6a
- (id)_adjustedOptionsWithOptions:(id)arg1;	// IMP=0x0000000000344b86
- (void)replaceDocument:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000344520
- (void)pushDocument:(id)arg1:(id)arg2;	// IMP=0x000000000034422e
- (void)popToDocument:(id)arg1;	// IMP=0x0000000000344228
- (void)popDocument;	// IMP=0x0000000000344172
@property(readonly, retain, nonatomic) NSArray *documents;
@property(readonly) __weak SUUIModalDocumentController *modalDocumentController;
- (id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2;	// IMP=0x0000000000343f13

@end

