//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class SCRO2DBrailleCanvas;

@protocol SCRO2DBrailleContentProtocol <NSObject>
- (void)panRight;
- (_Bool)canPanRight;
- (void)panLeft;
- (_Bool)canPanLeft;
- (void)drawOnCanvas:(SCRO2DBrailleCanvas *)arg1;
@end

