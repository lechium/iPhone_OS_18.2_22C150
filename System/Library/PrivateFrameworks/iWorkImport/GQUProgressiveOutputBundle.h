//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQUProgressiveHelper, NSString;

@interface GQUProgressiveOutputBundle : NSObject
{
    GQUProgressiveHelper *mHelper;	// 8 = 0x8
    struct __CFDictionary *mQuickLookProperties;	// 16 = 0x10
    struct __CFDictionary *mAttachmentsURLs;	// 24 = 0x18
    struct __CFDictionary *mComputedAttachments;	// 32 = 0x20
    struct __CFString *mUuidStr;	// 40 = 0x28
    struct __CFString *mUriScheme;	// 48 = 0x30
    _Bool mPreviewStarted;	// 56 = 0x38
}

- (void)setCurrentSheetUri:(struct __CFString *)arg1;	// IMP=0x0000000000015bca
- (struct __CFURL *)getAttachmentURL:(struct __CFString *)arg1 mimeType:(struct __CFString *)arg2;	// IMP=0x0000000000015aba
- (void)closeAttachment:(struct __CFString *)arg1;	// IMP=0x0000000000015a86
- (void)startProgressiveData;	// IMP=0x00000000000157b9
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x00000000000157a4
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x00000000000156e0
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x0000000000015593
- (_Bool)appendData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 resourceName:(struct __CFString *)arg3;	// IMP=0x0000000000015548
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x000000000001552a
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x0000000000015506
- (void)dealloc;	// IMP=0x0000000000015472
- (id)initWithHandler:(id)arg1;	// IMP=0x0000000000015357

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

