//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    void *mXlLinkTable;	// 8 = 0x8
    void *mXlNameTable;	// 16 = 0x10
    void *mSheetNames;	// 24 = 0x18
    void *mXlFormulaProcessor;	// 32 = 0x20
    EDWorkbook *mWorkbook;	// 40 = 0x28
    EDResources *mResources;	// 48 = 0x30
    id <TCCancelDelegate> mCancelDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000039a83c
@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
- (_Bool)isCancelled;	// IMP=0x000000000011e8a4
- (void)setResources:(id)arg1;	// IMP=0x00000000001159b4
- (id)resources;	// IMP=0x000000000011754a
- (void)setWorkbook:(id)arg1;	// IMP=0x00000000001159a3
- (id)workbook;	// IMP=0x000000000011eb9d
- (void *)xlFormulaProcessor;	// IMP=0x000000000012271f
- (void *)sheetNames;	// IMP=0x000000000039a831
- (void *)xlNameTable;	// IMP=0x000000000011dfa9
- (void *)xlLinkTable;	// IMP=0x000000000011dde1
- (void)dealloc;	// IMP=0x000000000012c8e0
- (id)initWithCancelDelegate:(id)arg1;	// IMP=0x000000000039a7a4

@end

