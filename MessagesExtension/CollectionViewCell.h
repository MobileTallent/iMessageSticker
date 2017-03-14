//
//  CollectionViewCell.h
//  NewStickerApp
//
//  Created by Rainbow on 10/21/16.
//  Copyright © 2016 admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MessagesViewController.h"

@interface CollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet MSStickerView *stickerView;
@end
