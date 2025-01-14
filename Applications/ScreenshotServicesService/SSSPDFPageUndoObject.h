//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFPage, SSSScreenshotModificationInfo;

@interface SSSPDFPageUndoObject : NSObject
{
    PDFPage *_page;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    SSSScreenshotModificationInfo *_modificationInfo;	// 24 = 0x18
}

+ (id)newPageUndoObjectWithPDFPage:(id)arg1 index:(long long)arg2 modificationInfo:(id)arg3;	// IMP=0x004000000001dae9
- (void).cxx_destruct;	// IMP=0x002000000001dbd0
@property(retain, nonatomic) SSSScreenshotModificationInfo *modificationInfo; // @synthesize modificationInfo=_modificationInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) PDFPage *page; // @synthesize page=_page;

@end

