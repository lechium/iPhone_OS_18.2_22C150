//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ADDisplayScaleContextCollectorDelegate;

@interface ADDisplayScaleContextCollector : NSObject
{
    id <ADDisplayScaleContextCollectorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ecdda
@property(nonatomic) __weak id <ADDisplayScaleContextCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (double)displayScale;	// IMP=0x00100000000ecdba
- (void)dealloc;	// IMP=0x00100000000ecd37
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000ecccf

@end

