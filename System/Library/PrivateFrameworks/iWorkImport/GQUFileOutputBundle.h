//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQUFileOutputBundle : NSObject
{
    struct __CFURL *mOutputUrl;	// 8 = 0x8
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x0000000000015351
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x000000000001534b
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x0000000000015183
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x0000000000015168
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x000000000001515b
- (void)dealloc;	// IMP=0x000000000001511c
- (id)initWithOutputPath:(struct __CFString *)arg1;	// IMP=0x0000000000015069

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

