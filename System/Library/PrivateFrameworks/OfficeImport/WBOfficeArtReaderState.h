//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WBReader, WXReadState;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState
{
    WBReader *mReader;	// 56 = 0x38
    int mCurrentTextType;	// 64 = 0x40
    WXReadState *mXmlDocumentState;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000413ea4
@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;
@property(nonatomic) __weak WBReader *reader; // @synthesize reader=mReader;
- (id)xmlDrawingState;	// IMP=0x0000000000413d47
- (id)initWithClient:(Class)arg1;	// IMP=0x00000000000bb552

@end
