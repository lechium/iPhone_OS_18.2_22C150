//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class MPMediaItemCollection, MPMediaPickerController;

@protocol MPMediaPickerControllerDelegate <NSObject>

@optional
- (void)mediaPickerDidCancel:(MPMediaPickerController *)arg1;
- (void)mediaPicker:(MPMediaPickerController *)arg1 didPickMediaItems:(MPMediaItemCollection *)arg2;
@end

