//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileCoordinator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityFileCoordinator : NSFileCoordinator
{
    NSString *_localPeerID;	// 64 = 0x40
}

- (_Bool)shouldRetryForError:(id)arg1 ignoreFile:(_Bool *)arg2;	// IMP=0x00000000002b4ac6
- (void)dealloc;	// IMP=0x00000000002b43f4
- (id)initWithFilePresenter:(id)arg1;	// IMP=0x00000000002b4393

@end

