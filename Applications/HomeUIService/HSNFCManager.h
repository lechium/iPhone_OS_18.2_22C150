//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HSNFCManagerDelegate;

@interface HSNFCManager : NSObject
{
    id <HSNFCManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005196b
@property(nonatomic) __weak id <HSNFCManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)readerSupportedWithError:(id *)arg1;	// IMP=0x001000000005193c
- (void)stop;	// IMP=0x0010000000051936
- (id)start;	// IMP=0x001000000005188e
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000005182a

@end
